/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 */

//setter functions

int rgb_keyboard::keyboard::set_mode( mode Mode ){
	_mode = Mode;
	return 0;
}

int rgb_keyboard::keyboard::set_direction( direction Direction ){
	_direction = Direction;
	return 0;
}

int rgb_keyboard::keyboard::set_speed( int Speed ){
	if( Speed >= _speed_min && Speed <= _speed_max ){
		_speed = Speed;
		return 0;
	} else{
		return 1;
	}
}

int rgb_keyboard::keyboard::set_brightness( int Brightness ){
	if( Brightness >= _brightness_min && Brightness <= _brightness_max ){
		_brightness = Brightness;
		return 0;
	} else{
		return 1;
	}
}

int rgb_keyboard::keyboard::set_color( uint8_t Color_r, uint8_t Color_g, uint8_t Color_b ){
	_color_r = Color_r;
	_color_g = Color_g;
	_color_b = Color_b;
	return 0;
}

int rgb_keyboard::keyboard::set_rainbow( bool Rainbow ){
	_rainbow = Rainbow;
	return 0;
}

int rgb_keyboard::keyboard::set_variant( mode_variant Variant ){
	_variant = Variant;
	return 0;
}