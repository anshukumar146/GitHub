#include <stdio.h>

int main() {
    int g, a, l, b, h;
    float area, perimeter, circumference, curve_surface_area, total_surface_area;
    float sh, r, he;

    printf("Geometry Calculator:\n\n");
    printf("Select a shape:\n");
    printf("1 : Square\n");
    printf("2 : Cube\n");
    printf("3 : Rectangle\n");
    printf("4 : Cuboid\n");
    printf("5 : Circle\n");
    printf("6 : Sphere\n");
    printf("7 : Triangle\n");
    printf("8 : Cone\n");
    printf("9 : Cylinder\n");
    printf("10 : Parallelogram\n\n");

    printf("Enter your choice: ");
    scanf("%d", &g);

    switch (g) {
        case 1: // Square
            printf("Enter the side of square: ");
            scanf("%d", &a);
            area = a * a;
            perimeter = 4 * a;
            printf("Area = %.2f\n Perimeter = %.2f\n", area, perimeter);
            break;

        case 2: // Cube
            printf("Enter the side of cube: ");
            scanf("%d", &a);
            curve_surface_area = 4 * a * a;
            total_surface_area = 6 * a * a;
            printf("Curved Surface Area = %.2f\n Total Surface Area = %.2f\n", curve_surface_area, total_surface_area);
            break;

        case 3: // Rectangle
            printf("Enter length and breadth: ");
            scanf("%d %d", &l, &b);
            area = l * b;
            perimeter = 2 * (l + b);
            printf("Area = %.2f\n Perimeter = %.2f\n", area, perimeter);
            break;

        case 4: // Cuboid
            printf("Enter length, breadth, and height: ");
            scanf("%d %d %d", &l, &b, &h);
            curve_surface_area = 2 * h * (l + b);
            total_surface_area = 2 * (l * b + b * h + h * l);
            printf("Curved Surface Area = %.2f\n Total Surface Area = %.2f\n", curve_surface_area, total_surface_area);
            break;

        case 5: // Circle
            printf("Enter radius: ");
            scanf("%f", &r);
            if (r != 0) {
                area = 3.14 * r * r;
                circumference = 2 * 3.14 * r;
                printf("Area = %.2f\nCircumference = %.2f\n", area, circumference);
            } else {
                printf("Radius cannot be zero.\n");
            }
            break;

        case 6: // Sphere
            printf("Enter radius: ");
            scanf("%f", &r);
            if (r != 0) {
                total_surface_area = 4 * 3.14 * r * r;
                printf("Total Surface Area = %.2f\n", total_surface_area);
            } else {
                printf("Radius cannot be zero.\n");
            }
            break;

        case 7: // Triangle
            printf("Enter base and height: ");
            scanf("%d %d", &b, &h);
            printf("Enter the third side: ");
            scanf("%d", &l);
            area = 0.5 * b * h;
            perimeter = l + b + h;
            printf("Area = %.2f\nPerimeter = %.2f\n", area, perimeter);
            break;

        case 8: // Cone
            printf("Enter radius, slant height, and height: ");
            scanf("%f %f %f", &r, &sh, &he);
            curve_surface_area = 3.14 * r * sh;
            total_surface_area = 3.14 * r * (sh + r);
            printf("Curved Surface Area = %.2f\nTotal Surface Area = %.2f\n", curve_surface_area, total_surface_area);
            break;

        case 9: // Cylinder
            printf("Enter radius and height: ");
            scanf("%f %f", &r, &he);
            curve_surface_area = 2 * 3.14 * r * he;
            total_surface_area = 2 * 3.14 * r * (r + he);
            printf("Curved Surface Area = %.2f\nTotal Surface Area = %.2f\n", curve_surface_area, total_surface_area);
            break;

        case 10: // Parallelogram
            printf("Enter base and height: ");
            scanf("%d %d", &b, &h);
            area = b * h;
            perimeter = 2 * (b + h);
            printf("Area = %.2f\nPerimeter = %.2f\n", area, perimeter);
            break;

        default:
            printf("Invalid input! Please choose between 1-10.\n");
            break;
    }

    return 0;
}