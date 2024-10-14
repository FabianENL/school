#include <stdio.h>

enum dag { ma, di, wo, dd, vr, za, zo };
typedef enum dag dag;

char* enumToString(dag x) {
	switch (x) {
	case 0: {
		return("Maandag");
		break;
	}
	case 1: {
		return("Disndag");
		break;
	}
	case 2: {
		return("Woensdag");
		break;
	}
	case 3: {
		return("Donderdag");
		break;
	}
	case 4: {
		return("Vrijdag");
		break;
	}
	case 5: {
		return("Zaterdag");
		break;
	}
	case 6: {
		return("Zondag");
		break;
	}
	default: {
		return("Ongeldige dag");
		break;
	}
	}
}

void main() {
	dag weekend = za;

	printf("Dag van de week: %s", enumToString(weekend));
}