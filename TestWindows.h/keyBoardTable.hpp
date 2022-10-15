#ifndef _KEYBOARDTABLE_HPP
#define _KEYBOARDTABLE_HPP
#include <string>
std::string checkKeyTable(int vkCode) {
	std::string keyName;

	switch (vkCode) {
		case 8:                        keyName = "BACKSPACE";    break;
		case 9:                        keyName = "TAB";          break;
		case 12:                       keyName = "CLEAR";        break;
		case 20:                       keyName = "CAPSLOCK";     break;
		case 27:                       keyName = "ESC";          break;
		case 32:                       keyName = "SPACEBAR";     break;
		case 33:                       keyName = "PAGEUP";       break;
		case 34:                       keyName = "PAGEDOWN";     break;
		case 35:                       keyName = "END";          break;
		case 36:                       keyName = "HOME";         break;
		case 37:                       keyName = "LEFT";         break;
		case 38:                       keyName = "UP";           break;
		case 39:                       keyName = "RIGHT";        break;
		case 40:                       keyName = "DOWN";         break;
		case 45:                       keyName = "INSERT";       break;
		case 46:                       keyName = "DELETE";       break;
		case 65:                       keyName = "A";            break;
		case 66:                       keyName = "B";            break;
		case 67:                       keyName = "C";            break;
		case 68:                       keyName = "D";            break;
		case 69:                       keyName = "E";            break;
		case 70:                       keyName = "F";            break;
		case 71:                       keyName = "G";            break;
		case 72:                       keyName = "H";            break;
		case 73:                       keyName = "I";            break;
		case 74:                       keyName = "J";            break;
		case 75:                       keyName = "K";            break;
		case 76:                       keyName = "L";            break;
		case 77:                       keyName = "M";            break;
		case 78:                       keyName = "N";            break;
		case 79:                       keyName = "O";            break;
		case 80:                       keyName = "P";            break;
		case 81:                       keyName = "Q";            break;
		case 82:                       keyName = "R";            break;
		case 83:                       keyName = "S";            break;
		case 84:                       keyName = "T";            break;
		case 85:                       keyName = "U";            break;
		case 86:                       keyName = "V";            break;
		case 87:                       keyName = "W";            break;
		case 88:                       keyName = "X";            break;
		case 89:                       keyName = "Y";            break;
		case 90:                       keyName = "Z";            break;
		case 93:                       keyName = "MENU";         break;
		case 106:                      keyName = "*";            break;
		case 112:                      keyName = "F1";           break;
		case 113:                      keyName = "F2";           break;
		case 114:                      keyName = "F3";           break;
		case 115:                      keyName = "F4";           break;
		case 116:                      keyName = "F5";           break;
		case 117:                      keyName = "F6";           break;
		case 118:                      keyName = "F7";           break;
		case 119:                      keyName = "F8";           break;
		case 120:                      keyName = "F9";           break;
		case 121:                      keyName = "F10";          break;
		case 122:                      keyName = "F11";          break;
		case 123:                      keyName = "F12";          break;
		case 144:                      keyName = "NUMLOCK";      break;
		case 186:                      keyName = ";";            break;
		case 188:                      keyName = ",";            break;
		case 192:                      keyName = "`";            break;
		case 219:                      keyName = "[";            break;
		case 220:                      keyName = "\\";           break;
		case 221:                      keyName = "]";            break;
		case 222:                      keyName = "'";            break;
		case 48:  case 96:             keyName = "0";            break;
		case 49:  case 97:             keyName = "1";            break;
		case 50:  case 98:             keyName = "2";            break;
		case 51:  case 99:             keyName = "3";            break;
		case 52:  case 100:            keyName = "4";            break;
		case 53:  case 101:            keyName = "5";            break;
		case 54:  case 102:            keyName = "6";            break;
		case 55:  case 103:            keyName = "7";            break;
		case 56:  case 104:            keyName = "8";            break;
		case 57:  case 105:            keyName = "9";            break;
		case 91:  case 92:             keyName = "WIN";          break;
		case 107: case 187:            keyName = "+";            break;
		case 13:  case 108:            keyName = "ENTER";        break;
		case 109: case 189:            keyName = "-";            break;
		case 110: case 190:            keyName = ".";            break;
		case 111: case 191:            keyName = "/";            break;
		case 16:  case 160: case 161:  keyName = "SHIFT";        break;
		case 17:  case 162: case 163:  keyName = "CONTROL";      break;
		case 18:  case 164: case 165:  keyName = "ALT";          break;
	}

	return keyName;
}

#endif // !_KEYBOARDTABLE_HPP