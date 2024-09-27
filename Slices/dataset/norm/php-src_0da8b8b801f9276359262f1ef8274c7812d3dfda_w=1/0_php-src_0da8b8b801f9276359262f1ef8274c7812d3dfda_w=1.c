static inline int FUN1(unsigned VAR1, int VAR2)
{
	switch (VAR2) {
	case VAR3:
		return (VAR1 >= 0x20 && VAR1 <= 0x7E) ||
			(VAR1 == 0x0A || VAR1 == 0x09 || VAR1 == 0x0D) ||
			(VAR1 >= 0xA0 && VAR1 <= 0xD7FF) ||
			(VAR1 >= 0xE000 && VAR1 <= 0x10FFFF);
	case VAR4:
		return (VAR1 >= 0x20 && VAR1 <= 0x7E) ||
			(VAR1 >= 0x09 && VAR1 <= 0x0D && VAR1 != 0x0B) ||
			(VAR1 >= 0xA0 && VAR1 <= 0xD7FF) ||
			(VAR1 >= 0xE000 && VAR1 <= 0x10FFFF &&
				((VAR1 & 0xFFFF) < 0xFFFE) &&
				(VAR1 < 0xFDD0 || VAR1 > 0xFDEF));
	case VAR5:
	case VAR6:
		return (VAR1 >= 0x20 && VAR1 <= 0xD7FF) ||
			(VAR1 == 0x0A || VAR1 == 0x09 || VAR1 == 0x0D) ||
			(VAR1 >= 0xE000 && VAR1 <= 0x10FFFF && VAR1 != 0xFFFE && VAR1 != 0xFFFF);
	default:
		return 1;
	}
}