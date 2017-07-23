#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <Windows.h>
struct s_position {
    int start;
    int end;
};

struct s_digits {
    int decade;
    int unit;
};

enum e_place {
    UNITS,
    MINUTES,
    HOURS
};

typedef struct s_position    POSITION;
typedef struct s_digits      DIGITS;
typedef enum   e_place       PLACE;

const char *digits[3] = {
    "TWENTYTHIRTYFORTYFIFTYZEROONETWOTHREEFORFIVESIXSEVENEIGHTNINETENELEVENTWELVEFIFTEEN SECONDS",
    "TWENTYTHIRTYFORTYFIFTYZEROONETWOTHREEFORFIVESIXSEVENEIGHTNINETENELEVENTWELVEFIFTEEN MINUTES",
    "ZEROONETWOTHREEFORFIVESIXSEVENEIGHTNINETENELEVENTWELVE                              HOURS"
};

const char *numToWord[19] = {
    "ZERO",
    "ONE",
    "TWO",
    "THREE",
    "FOR",
    "FIVE",
    "SIX",
    "SEVEN",
    "EIGHT",
    "NINE",
    "TEN",
    "ELEVEN",
    "TWELVE",
    "TWENTY",
    "THIRTY",
    "FORTY",
    "FIFTY",
    "TEEN",
    "FIFTEEN"
};

void    wait(int time) {
    clock_t end = clock() + (time * CLOCKS_PER_SEC);
    while(clock()< end);
}

POSITION get_wordPos(const char *word, PLACE where, bool decade)
{
    POSITION position   = {.start = 0, .end = 0};

    size_t  lenght      = strlen(digits[where]);
    size_t  lenght_word = strlen(word);
    size_t  lenght_word_found = 0;

    unsigned int x = 0;

    if(where != HOURS && !decade)
        x = 26;

    for(; x < lenght; ++x)
    {
    if(digits[where][x] == word[0])
    {
            int k =  0;

            position.start = x;

            while((lenght_word_found < lenght_word) &&
                  (digits[where][x + k] == word[lenght_word_found]))
            {
                ++k;
                ++lenght_word_found;
            }

            if(lenght_word_found == lenght_word)
            {
                position.end = k + position.start;

                return position;
            }

            lenght_word_found = 0;
        }
    }

    position.start = -1;
    position.end   = -1;

    return position;
}

int    get_digit(int number, int x)
{
    return ( number / ((int)pow(10, x-1)) % 10 );
}

DIGITS get_wordNum(int time)
{
    DIGITS    digit = {.decade = 0, .unit = 0};

    if(time > 12 && time != 15)
        digit.unit = get_digit(time, 1);

    if(time > 12 && time < 20)
        if(time == 15)
            digit.decade = 18;
        else
            digit.decade = 17;
    else if(time >= 20 && time < 30)
        digit.decade = 13;
    else if(time >= 30 && time < 40)
        digit.decade = 14;
    else if(time >= 40 && time < 50)
        digit.decade = 15;
    else if(time >= 50 && time < 60)
        digit.decade = 16;
    else
        digit.decade = time;

    return digit;
}

void     print_time(int time, PLACE where)
{

    size_t      lenght = strlen(digits[where]);

    POSITION    decadeWord = {.start = 0, .end = 0},
                unitWord   = {.start = 0, .end = 0};
    POSITION    name;

    DIGITS      wordNum = get_wordNum(time);

    switch(where)
    {
        case UNITS:
            name = get_wordPos("SECONDS", where, 0);
            break;
        case MINUTES:
            name = get_wordPos("MINUTES", where, 0);
            break;
        case HOURS:
            name = get_wordPos("HOURS", where, 0);
            break;
        default:
            ;
    }

    decadeWord = get_wordPos(numToWord[wordNum.decade], where, 1);

    if(wordNum.unit != 0)
        unitWord = get_wordPos(numToWord[wordNum.unit], where, 0);
int x;
    for( x = 0; x < (int)lenght; x++)
    {
        if((x >= decadeWord.start && x < decadeWord.end)
        || (x >= unitWord.start && x < unitWord.end)
        || (x >= name.start && x < name.end))
            putchar(digits[where][x]);
        else
            putchar('+');
    }
}

void    print_clock(SYSTEMTIME clock)
{
	//2015/12/14: Nettoyage de la console a chaque seconde pour faciliter la lecture.
	system("cls");
	//String[60] names = { "", "un", "deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf", "dix", "onze", "douze", "treize", "quatorze", "quinze", "seize", "dix-sept", "dix-huit", "dix neuf", "vingt", "vingt et un", "vingt-deux", "vingt-trois", "vingt-quatre", "vingter-cinq", "vingt-six", "vingt-sept", "vingt-huit", "vingt-neuf", "trente", "trente et un", "trente-deux", "trente-trois", "trente-quatre", "trente-cinq", "trente-six", "trente-sept", "trente-huit", "trente-neuf", "quarante", "quarante et un", "quarante-deux", "quarante-trois", "quarante-quatre", "quarante-cinq", "quarante-six", "quarante-sept", "quarante-huit", "quarante-neuf", "cinquante", "cinquante et un", "cinquante-deux", "cinquante-trois", "cinquante-quatre", "cinquante-cinq", "cinquante-six", "cinquante-sept", "cinquante-huit", "cinquante-neuf", "soixante"};
    print_time(clock.wSecond, UNITS); putchar('\n');
    print_time(clock.wMinute, MINUTES); putchar('\n');
    print_time(clock.wHour, HOURS); putchar('\n');

    printf("\n");
}

int main(void)
{
	//2015/12/14: implémentation de la structure SYSTEMTIME
	SYSTEMTIME unTime;
	int sec=0;
	//2015/12/14: implémentation d'une alarme qui ferme le programme apres un nombre de seconde
	printf("entrez le nombre de seconde avant l'alarme\n");
	scanf("%d", &sec);
	int tour = sec;
    while(tour>0)
	{

		GetLocalTime(&unTime);
		if (unTime.wHour > 12)
			unTime.wHour -= 12;

		print_clock(unTime);

        wait(1);
		tour--;
    }
	system("cls");
	printf("Alarme!");
	Beep(523, 500);
	Beep(550, 500);
	Beep(600, 500);
	Beep(650, 500);
    return 0;
}
