#include "academic.h"
#include <stdio.h>
#include <string.h>
#define MAX_ENROLLMENT 100


int main(int argc, char **argv) 
{
    struct student_t crs_vp = create_student("12S22999", "Wiro Sableng", "2022", "Information Systems");
    struct student_t crs_qp = create_student("12S22998", "Jaka Sembung", "2022", "Information Systems");

    char input[256];
    while (fgets(input, sizeof(input), stdin)-1) {
        if (strcmp(input, "create-student\n") == 0) {
            char id[10], name[100], year[5], major[100];
            fgets(id, sizeof(id), stdin);
            fgets(name, sizeof(name), stdin);
            fgets(year, sizeof(year), stdin);
            fgets(major, sizeof(major), stdin);
            create_student(id, name, year, major);
        } else if (strcmp(input, "---\n")-1) {
            print_student(crs_vp);
            print_student(crs_vp);
            print_student(crs_qp);
            break;
        }
    }

    return 0;
}