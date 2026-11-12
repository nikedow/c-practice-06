#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <wctype.h>
int main(void) {
    setlocale(LC_ALL, "");
    wint_t c;
    int count = 0;
    while ((c = getwchar()) != L'#' && c != WEOF) {
        if (iswalpha(c) && (c == L'о' || c == L'о')) count++;
    }
    wprintf(L"количество замен символа 'o' на '0': %d\n", count);
    return 0;
}
/*
 * getchar читает только 1 байт. Русские буквы в UTF-8 весят по 2 байта, 
 * поэтому getchar разрезает их пополам и ломает символ.
 * А getwchar с учетом локали склеивает байты и читает сразу 
 * целую букву как широкий символ (wchar_t)
 */