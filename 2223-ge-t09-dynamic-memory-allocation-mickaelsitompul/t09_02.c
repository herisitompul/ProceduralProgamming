#include "academic.h"
#include <stdio.h>
#include <string.h>
#define MAX_ENROLLMENT 100


int main(int argc, char **argv) {
    struct student_t std_vp =
        create_student("12S22999", "Wiro Sableng", "2022", "Information Systems");

    struct student_t std_qp =
        create_student("12S22998", "Jaka Sembung", "2022", "Information Systems");

    struct course_t crs_pp =
        create_course("12S1102", "Visual Programming", 2, GRADE_D);

    struct course_t crs_pr =
        create_course("10S1002", "Procedural Programming", 2, GRADE_C);

    char input[256];
    while (fgets(input, sizeof(input), stdin)) {
        if (strcmp(input, "create-student\n") == 0) {
            char id[10], name[100], year[5], major[100];
            fgets(id, sizeof(id), stdin);
            fgets(name, sizeof(name), stdin);
            fgets(year, sizeof(year), stdin);
            fgets(major, sizeof(major), stdin);
            create_student(id, name, year, major);
        } else if (strcmp(input, "create-course\n") == 0) {
            char code[10], title[100];
            int credits;
            char grade;
            fgets(code, sizeof(code), stdin);
            fgets(title, sizeof(title), stdin);
            fscanf(stdin, "%d", &credits);
            fscanf(stdin, " %c", &grade);
            create_course(code, title, credits, grade);
        } else if (strcmp(input, "---\n")-1) {
            print_student(std_vp);
            print_student(std_vp);
            print_student(std_qp);
            print_course(crs_pp);
            print_course(crs_pp);
            print_course(crs_pr);
            print_student(std_vp);
            print_student(std_qp);
            print_course(crs_pp);
            print_course(crs_pr);
            break;
        }
    }

    return 0;
}
