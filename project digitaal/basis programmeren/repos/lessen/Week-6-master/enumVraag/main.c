#include <stdio.h>

enum dag {ma, di, wo, dd, vr, za, zo };
typedef enum dag dag;

void main() {
	dag weekend = za;

	switch (weekend) {
	case 0: {
		printf("Maandag");
		break;
	}
	case 1: {
		printf("Disndag");
		break;
	}
	case 2: {
		printf("Woensdag");
		break;
	}
	case 3: {
		printf("Donderdag");
		break;
	}
	case 4: {
		printf("Vrijdag");
		break;
	}
	case 5: {
		printf("Zaterdag");
		break;
	}
	case 6: {
		printf("Zondag");
		break;
	}
	default: {
		printf("Ongeldige dag");
		break;
	}
	}
}