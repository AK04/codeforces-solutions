#include<stdio.h>
#include<string.h>

int main() {

	int number, i, faces = 0;

	char polyhedron[15];

	scanf("%d", &number);

	for (i = 0; i < number; ++i) {
		scanf("%s", polyhedron);

		if(strcmp(polyhedron, "Tetrahedron") == 0)
			faces += 4;
		else if(strcmp(polyhedron, "Cube") == 0)
			faces += 6;
		else if(strcmp(polyhedron, "Octahedron") == 0)
			faces += 8;
		else if(strcmp(polyhedron, "Dodecahedron") == 0)
			faces += 12;
		else if(strcmp(polyhedron, "Icosahedron") == 0)
			faces += 20;
	}

	printf("%d", faces);

}