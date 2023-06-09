// 12S20033 - Mickael Heri Irawan Sitompul
// 12S20027 - Ferry Ando Panjaitan

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "./libs/dorm.h"
#include "./libs/student.h"

int main(int _argc, char **_argv)
{
    dorm_t *dorms = (dorm_t*) malloc(1 * sizeof(dorm_t));
    student_t *students = (student_t*) malloc(1 * sizeof(student_t));
    unsigned short totalDorm;
    unsigned short totalStudent;
    char line[255];
    char delim[2] = "#";


    while ( 1 ) {
        line[0] = '\0';
        fgets(line, 255, stdin);
        fflush(stdout);
        
       
        {
            int len = strlen(line);
            for (short a = 0; a < len; a++) {
                if(line[a] == '\r' || line[a] == '\n') {
                    for(short b = a; b < len; b++) { line[b] = line[b + 1]; }
                    len--;
                    a--;
                }
            }
        }

        if ( strcmp(line, "---") == 0 ) break;

        else if ( strcmp(line, "student-print-all") == 0 ) {
            for (short i=0; i<totalStudent; i++) {
                print_student(students[i]);
            }
        }

        else if ( strcmp(line, "dorm-print-all") == 0 ) {
            for (short i=0; i<totalDorm; i++) {
                print_dorm(dorms[i]);
            }
        }

        else if ( strcmp(line, "student-print-all-detail") == 0 ) {
            for (short i=0; i<totalStudent; i++) {
                print_student_detail(students[i]);
            }
            
        }

        else if ( strcmp(line, "dorm-print-all-detail") == 0 ) {
            for (short i=0; i<totalDorm; i++) {
                print_dorm_detail(dorms[i]);
            }
        }

        else {
            char *token = strtok(line, delim);

            if ( strcmp(token, "student-add") == 0 ) {
                token = strtok(NULL, delim); char *_id = token;
                token = strtok(NULL, delim); char *_name = token;
                token = strtok(NULL, delim); char *_year = token;
                
                token = strtok(NULL, delim);
                if ( totalStudent > 0 ) {
                    students = (student_t*) realloc(students, (totalStudent+1) * sizeof(student_t));
                }
                if ( strcmp(token, "male") == 0 ) {
                    students[totalStudent] = create_student(_id, _name, _year, GENDER_MALE);
                    totalStudent++;
                }
                else if ( strcmp(token, "female") == 0 ) {
                    students[totalStudent] = create_student(_id, _name, _year, GENDER_FEMALE);
                    totalStudent++;
                }
            }

            else if ( strcmp(token, "dorm-add") == 0 ) {
                token = strtok(NULL, delim); char *_name = token;
                token = strtok(NULL, delim); unsigned short _capacity = atoi(token);
                token = strtok(NULL, delim);
                if ( totalDorm > 0 ) {
                    dorms = (dorm_t*) realloc(dorms, (totalDorm+1) * sizeof(dorm_t));
                }
                if ( strcmp(token, "male") == 0 ) {
                    dorms[totalDorm] = create_dorm(_name, _capacity, GENDER_MALE);
                    totalDorm++;
                }
                else if ( strcmp(token, "female") == 0 ) {
                    dorms[totalDorm] = create_dorm(_name, _capacity, GENDER_FEMALE);
                    totalDorm++;
                }
            }
        }
    }
    
    return 0;
}
