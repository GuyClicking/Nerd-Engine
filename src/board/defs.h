/*
 * This file is part of Nerd Engine
 *
 * Nerd Engine is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Nerd Engine is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
 * GNU General Public License for more details.
 *
 * You should have recieved a copy of the GNU General Public License
 * along with Nerd Engine.  If not, see <https://www.gnu.org/licenses/>.
 */
#pragma once

#include "../types.h"

#define STARTING_FEN ""

typedef struct {
    Bitboard pieces[PIECE_TYPE_CNT];
    Bitboard sides[TURN_CNT];

    Piece board[SQ_CNT];

    Turn turn;
} Board;