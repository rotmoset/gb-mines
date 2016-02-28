#include <gb/gb.h>
#include <gb/drawing.h>
#include <minesweeper.h>
#include <stdlib.h>
#include "game.h"
#include "graphics.h"
#include "utils.h"

#define GRID_WIDTH 20
#define GRID_HEIGHT 18

#define MARKER_NB 0

TILESET(
	game_tiles,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, // 0
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x1C, 0x1C, 0x04, 0x04, 0x04, 0x04, // 1
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1F, 0x1F,
	0x00, 0x00, 0x3C, 0x3C, 0x04, 0x04, 0x04, 0x04, // 2
	0x3C, 0x3C, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x3C,
	0x00, 0x00, 0x3C, 0x3C, 0x04, 0x04, 0x04, 0x04, // 3
	0x3C, 0x3C, 0x04, 0x04, 0x04, 0x04, 0x3C, 0x3C,
	0x00, 0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, // 4
	0x3C, 0x3C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
	0x00, 0x00, 0x3C, 0x3C, 0x20, 0x20, 0x20, 0x20, // 5
	0x3C, 0x3C, 0x04, 0x04, 0x04, 0x04, 0x3C, 0x3C,
	0x00, 0x00, 0x3C, 0x3C, 0x20, 0x20, 0x20, 0x20, // 6
	0x3C, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x3C,
	0x00, 0x00, 0x3C, 0x3C, 0x04, 0x04, 0x04, 0x04, // 7
	0x0E, 0x0E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
	0x00, 0x00, 0x3C, 0x3C, 0x24, 0x24, 0x24, 0x24, // 8
	0x3C, 0x3C, 0x24, 0x24, 0x24, 0x24, 0x3C, 0x3C,
	0x00, 0x00, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x7E, // Unopened
	0x00, 0x7E, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x00,
	0x00, 0x00, 0x08, 0x08, 0x18, 0x18, 0x38, 0x38, // Flagged
	0x18, 0x18, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
	0x18, 0x18, 0x24, 0x3C, 0x7E, 0x5A, 0xBD, 0xFF, // Mine
	0xBD, 0xFF, 0x7E, 0x5A, 0x24, 0x3C, 0x18, 0x18,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // Black
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // White
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
);

TILESET(
	select_to_view_tiles,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0x81, 0x81, 0x89, 0x89,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x83, 0x83, 0x83, 0x8F, 0x8F,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x18, 0x18, 0x78, 0x78,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x18, 0x18, 0x08, 0x08, 0x8E, 0x8E,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0E, 0x0E, 0x0E, 0x0E, 0x3F, 0x3F,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x8E, 0x8E,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x23, 0x23,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x82, 0x82, 0x82, 0x82, 0x8E, 0x8E,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x01, 0x01, 0x11, 0x11,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0xC1, 0xC1, 0xC1, 0x88, 0x88,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0xE3, 0xE3, 0xE3, 0xE9, 0xE9,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0x81, 0x80, 0x80, 0x88, 0x88,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC4, 0xC4,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7F, 0x7F,
	0x89, 0x89, 0x8F, 0x8F, 0x87, 0x87, 0xC3, 0xC3, 0xE1, 0xE1, 0xF1, 0xF1, 0x91, 0x91, 0x91, 0x91,
	0x8F, 0x8F, 0x8F, 0x8F, 0x83, 0x83, 0x83, 0x83, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F,
	0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C,
	0x78, 0x78, 0x78, 0x78, 0x18, 0x18, 0x18, 0x18, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78,
	0x8E, 0x8E, 0x8E, 0x8E, 0xFE, 0xFE, 0xFE, 0xFE, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E,
	0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
	0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E, 0x8E,
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
	0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xE4, 0xE4, 0xE0, 0xE0,
	0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0xF1, 0xF1, 0xF1, 0xF1,
	0x11, 0x11, 0x11, 0x11, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x95, 0x95, 0x84, 0x84,
	0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F,
	0x11, 0x11, 0x11, 0x11, 0x07, 0x07, 0x01, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
	0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
	0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x8C, 0x8C, 0x80, 0x80, 0x80, 0x80,
	0x88, 0x88, 0x88, 0x88, 0x80, 0x80, 0x81, 0x81, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
	0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4,
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
	0x81, 0x81, 0xC3, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x81, 0x81, 0x81, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x04, 0x04, 0x04, 0x04, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x08, 0x08, 0x0C, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x1E, 0x1E, 0x3E, 0x3E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x3F, 0x3F, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x8F, 0x8F, 0x8F, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x03, 0x03, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xE0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xF1, 0xF1, 0xF1, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x8E, 0x8E, 0x8E, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x01, 0x01, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xC0, 0xC0, 0xC1, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x9C, 0x9C, 0x9C, 0x9C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x88, 0x88, 0x88, 0x88, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
);

TILEMAP(select_to_view_map, 20, 3,
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0A, 0x0C, 0x0D, 0x0E,
	0x0F, 0x10, 0x11, 0x12, 0x00, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x14,
	0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23, 0x24, 0x00, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B,
	0x2C, 0x2D, 0x2E, 0x26, 0x2F, 0x2A, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35
);

unsigned char sprites[] =
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Empty
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xFF,0xFF,0x81,0x81,0x81,0x81,0x81,0x81, // Marker
	0x81,0x81,0xC1,0x81,0xA1,0xC1,0xFF,0xFF
};

// Offsets in game_tiles
enum tile {
	Zero = 0,
	One = 1,
	Two = 2,
	Three = 3,
	Four = 4,
	Five = 5,
	Six = 6,
	Seven = 7,
	Eight = 8,
	Unopened = 9,
	Flagged = 10,
	Mine = 11,
	Black = 12,
	White = 13
};

// Digit to tile offset in game_tiles
uint8_t digit_to_tile(uint8_t digit)
{
	return (uint8_t)digit; // Actually the same for now.
}

void move_marker(int16_t x, int16_t y)
{
	move_sprite(MARKER_NB, (SCREENWIDTH / GRID_WIDTH) * (x+1), (SCREENHEIGHT / GRID_HEIGHT) * (y+2));
}

void show_marker()
{
	set_sprite_tile(MARKER_NB, 1);
}

void hide_marker()
{
	set_sprite_tile(MARKER_NB, 0);
}

int16_t wrap(int16_t value, int16_t max)
{
	if (value < 0) return max;
	if (value > max) return 0;
	return value;
}

struct loaded_tileset* loaded_game_tiles;

void set_tile(int16_t x, int16_t y, uint8_t tile)
{
	place_tile(loaded_game_tiles, tile, x, y);
}

void render_board(struct board* board)
{
	int16_t x, y;
	uint8_t* tile;
	int8_t sprite;
	for (x = 0;x<GRID_WIDTH;x += 1)
	{
		for (y = 0;y < GRID_HEIGHT;y += 1)
		{
			tile = get_tile_at(board, x, y);

			if (*tile&TILE_OPENED && *tile&TILE_MINE)
				sprite = Mine;
			else if (*tile&TILE_OPENED)
				sprite = digit_to_tile(adjacent_mine_count(tile));
			else if (*tile&TILE_FLAG)
				sprite = Flagged;
			else
				sprite = Unopened;

			set_tile(x, y, sprite);
		}
	}
}

void show_won_game()
{
	// Monotone bitmap where every element is row on screen.
	// LSB is bottom of screen.
	static const unsigned long bitmap[] = {
		0x0000, 0x0000, 0x0F00, 0x30C0, 0x5020,
		0x5220, 0xBB10, 0xBA90, 0x13A48, 0x11248,
		0x11248, 0x13A48, 0xBA90, 0xBB10, 0x5220,
		0x5020, 0x30C0, 0x0F00, 0x0000, 0x000
	};

	int16_t y, x;
	for (y = 0;y < GRID_HEIGHT; y++)
	{
		for (x = 0;x < GRID_WIDTH;x++)
		{
			int8_t bit = (bitmap[x] >> ((GRID_HEIGHT - 1) - y)) & 1;
			place_tile(loaded_game_tiles, bit ? White : Black, x, y);
		}
		delay(75);
	}
}

void show_game_over()
{
	// Monotone bitmap where every element is row on screen.
	// LSB is bottom of screen.
	static const uint32_t bitmap[] = {
		0x0000, 0x7DF0, 0x4510, 0x5510, 0x5DF0,
		0x0000, 0x3DE0, 0x4810, 0x3DE0, 0x0000,
		0x7DF0, 0x4150, 0x3110, 0x4000, 0x7DF0,
		0x0140, 0x7DB0, 0x5400, 0x45D0, 0x0000
	};
	int16_t sx = 0; // Spiral coordinates calculated from center
	int16_t sy = 0;
	int32_t N = GRID_WIDTH > GRID_HEIGHT ? GRID_WIDTH : GRID_HEIGHT;
	int32_t i;

	// Spiral.
	for (i = 0; i < N*N; i++)
	{
		int16_t x = GRID_WIDTH / 2 + sx - 1;
		int16_t y = GRID_HEIGHT / 2 + sy;
		int8_t bit = (bitmap[x] >> ((GRID_HEIGHT-1)-y)) & 1;
		set_tile(x,y, bit ? White : Black);

		if (abs(sx) <= abs(sy) && (sx != sy || sx >= 0))
			sx += ((sy >= 0) ? 1 : -1);
		else
			sy += ((sx >= 0) ? -1 : 1);

		delay(5);
	}
}

void load_tiles()
{
	// Background tiles
	loaded_game_tiles = load_tileset(&game_tiles);

	// Sprite tiles
	set_sprite_data(0, 2, sprites);
}

// Seed prng using current time (8 bit) and previous seed.
// Call multiple times at unpredictable moments (like user input) to increase entropy.
void seed_prng()
{
	srand((rand()<<8)|DIV_REG);
}

void show_select_to_view()
{
	struct loaded_tileset* loaded_tileset = load_tileset(&select_to_view_tiles);
	place_tiles(loaded_tileset, &select_to_view_map, 0, GRID_HEIGHT - select_to_view_map.height);
}

void play_game(int8_t difficulty)
{
	bool first_open = true;
	struct board* board;
	uint8_t *game_memory = malloc(minimum_buffer_size(GRID_WIDTH, GRID_HEIGHT));
	static unsigned char tilemap_buffer[GRID_WIDTH*GRID_HEIGHT];

	// 1st seed
	seed_prng();

	board = board_init(GRID_WIDTH, GRID_HEIGHT, 0.1 * (difficulty+1), game_memory);
	
	// Prepare graphics
	load_tiles();
	show_marker();

	SHOW_BKG;
	SHOW_SPRITES;
	SPRITES_8x8;

	render_board(board);

	while (board->_state != BOARD_GAME_OVER && board->_state != BOARD_WIN)
	{
		if (button_pressed(J_UP,50))
			move_cursor(board, UP);
		if (button_pressed(J_DOWN, 50))
			move_cursor(board, DOWN);
		if (button_pressed(J_LEFT, 50))
			move_cursor(board, LEFT);
		if (button_pressed(J_RIGHT, 50))
			move_cursor(board, RIGHT);
		if (button_pressed(J_A, -1))
		{
			// Add more entropy to prng first time we open a tile
			if (first_open)
			{
				// 2nd seed
				seed_prng();
				first_open = false;
			}
			open_tile_at_cursor(board);
			render_board(board);
		}
		if (button_pressed(J_B, -1))
		{
			toggle_flag_at_cursor(board);
			render_board(board);
		}
		move_marker(board->cursor_x, board->cursor_y);
		delay(75);
	}

	hide_marker();
	
	// Save current tilemap
	get_bkg_tiles(0, 0, GRID_WIDTH, GRID_HEIGHT, tilemap_buffer);

	if (board->_state == BOARD_WIN)
		show_won_game();
	else if (board->_state == BOARD_GAME_OVER)
		show_game_over();

	// Add text to above screens
	show_select_to_view();

	while (1)
	{
		// While user presses select, temporarily show saved tilemap
		if (button_pressed(J_SELECT, 0))
		{
			push_graphics();
			set_bkg_tiles(0, 0, GRID_WIDTH, GRID_HEIGHT, tilemap_buffer);
			while (button_pressed(J_SELECT, 0));
			pop_graphics();
		}
		if (button_pressed(J_START, -1) || button_pressed(J_A, -1))
			break;
	}

	free(game_memory);
}
