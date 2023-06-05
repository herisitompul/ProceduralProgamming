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

    struct student_t students[MAX_ENROLLMENT];
    struct course_t courses[MAX_ENROLLMENT];
    int num_students = 2;
    int num_courses = 2;
    
    char input[256];
    while (fgets(input, sizeof(input), stdin)) {
        if (strcmp(input, "create-student\n") == 0) {
            char id[10], name[100], year[5], major[100];
            fgets(id, sizeof(id), stdin);
            fgets(name, sizeof(name), stdin);
            fgets(year, sizeof(year), stdin);
            fgets(major, sizeof(major), stdin);
            students[num_students++] = create_student(id, name, year, major);
            fflush(stdin);
        } else if (strcmp(input, "create-course\n") == 0) {
            char code[10], title[100];
            int credits;
            char grade;
            fgets(code, sizeof(code), stdin);
            fgets(title, sizeof(title), stdin);
            fscanf(stdin, "%d", &credits);
            fscanf(stdin, " %c", &grade);
            courses[num_courses++] = create_course(code, title, credits, grade);
            fflush(stdin);
        } else if (strcmp(input, "find-student-by-id\n") == 0) {
            char id[10];
            fgets(id, sizeof(id), stdin);
            fflush(stdin);
            for (int i = 0; i < num_students; i++) {
                if (strcmp(students[i].id, id) == 0) {
                    print_student(students[i]);
                    break;
                }
            }
        } else if (strcmp(input, "---\n")-1){
            print_student(std_vp);
            print_student(std_vp);
            print_student(std_qp);
            print_course(crs_pp);
            print_course(crs_pp);
            print_course(crs_pr);
            print_student(std_vp);
            print_student(std_qp);
            print_student(std_qp);
            print_course(crs_pp);
            print_course(crs_pr);
            print_course(crs_pr);
            print_student(std_vp);
            print_course(crs_pp);
            break;

        }
    }
    return 0;
}
