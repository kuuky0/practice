#include <iostream>

#define TO_STR(x) #x

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

#define print_day (day); \
    do { \
        if (day == MONDAY) { \
            std::cout << TO_STR(MONDAY) << std::endl; \
        } else if (day == TUESDAY) { \
            std::cout << TO_STR(TUESDAY) << std::endl; \
        } else if (day == WEDNESDAY) { \
            std::cout << TO_STR(WEDNESDAY) << std::endl; \
        } else if (day == THURSDAY) { \
            std::cout << TO_STR(THURSDAY) << std::endl; \
        } else if (day == FRIDAY) { \
            std::cout << TO_STR(FRIDAY) << std::endl; \
        } else if (day == SATURDAY) { \
            std::cout << TO_STR(SATURDAY) << std::endl; \
        } else if (day == SUNDAY) { \
            std::cout << TO_STR(SUNDAY) << std::endl; \
        } \
    } while (0);



int main() {
	int day;
	std::cout << "Input day of week: ";
	std::cin >> day;

    print_day(day);
}

int main() {
    int day;
    std::cout << "Input day of week: ";
    std::cin >> day;

    print_day(day);
}

int main() {
    int day;
    std::cout << "Input day of week: ";
    std::cin >> day;

    print_day(day);
}

int main() {
    int day;
    std::cout << "Input day of week: ";
    std::cin >> day;

    print_day(day);
}