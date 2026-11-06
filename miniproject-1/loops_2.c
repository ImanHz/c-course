#include <locale.h>
#include <wchar.h>

#define COLOR_RESET L"\033[0;0m"
#define COLOR_RED L"\033[0;31m"
#define COLOR_GREEN L"\033[0;32m"
#define COLOR_YELLOW L"\033[0;33m"
#define COLOR_BLUE L"\033[0;34m"
#define COLOR_CYAN L"\033[0;36m"

const wchar_t horizontal = L'\u2500';        // ─ U+2500
const wchar_t vertical = L'\u2502';          // │ U+2502
const wchar_t corner_up_left = L'\u250C';    // ┌ U+250C
const wchar_t corner_down_left = L'\u2514';  // └ U+2514
const wchar_t corner_down_right = L'\u2518'; // ┘ U+2518
const wchar_t corner_up_right = L'\u2510';   // ┐ U+2510
const wchar_t junction_left = L'\u251C';     // ├ U+251C
const wchar_t junction_right = L'\u2524';    // ┤ U+2524
const wchar_t junction_center = L'\u253C';   // ┼ U+253C
const wchar_t junction_top = L'\u252C';      // ┬ U+252C
const wchar_t junction_bottom = L'\u2534';   // ┴ U+2534

enum alignment_t {
  LEFT = -6,
  RIGHT = 6,
};

int abs(int x) { return x < 0 ? -1 * x : x; }

void print_mid_lines(int length, enum alignment_t alignment) {

  for (int l = 0; l < length; l++) {
    if (l == 0) {
      wprintf(L"%lc", junction_left);
    } else if (l == length - 1) {
      wprintf(L"%lc", junction_right);
    } else if (l % (abs(alignment) + 1) == 0) {
      wprintf(L"%lc", junction_center);
    } else {
      wprintf(L"%lc", horizontal);
    }
  }
  wprintf(L"\n");
}

void print_start_line(int length, enum alignment_t alignment) {

  for (int l = 0; l < length; l++) {
    if (l == 0) {
      wprintf(L"%lc", corner_up_left);
    } else if (l == length - 1) {
      wprintf(L"%lc", corner_up_right);
    } else if (l % (abs(alignment) + 1) == 0) {
      wprintf(L"%lc", junction_top);
    } else {
      wprintf(L"%lc", horizontal);
    }
  }
  wprintf(L"\n");
}
void print_end_line(int length, enum alignment_t alignment) {

  for (int l = 0; l < length; l++) {
    if (l == 0) {
      wprintf(L"%lc", corner_down_left);
    } else if (l == length - 1) {
      wprintf(L"%lc", corner_down_right);
    } else if (l % (abs(alignment) + 1) == 0) {
      wprintf(L"%lc", junction_bottom);
    } else {
      wprintf(L"%lc", horizontal);
    }
  }
  wprintf(L"\n");
}

void print_table(enum alignment_t alignment) {

  int length = 10 * (abs(alignment) + 1) + 1;
  setlocale(LC_ALL, "");
  print_start_line(length, alignment);
  for (int i = 1; i <= 10; i++) {
    wprintf(L"%lc", vertical);
    for (int j = 1; j <= 10; j++) {
      if (j == 1 || i == 1) {
        wprintf(L"%ls%*d%ls%lc", COLOR_YELLOW, alignment, i * j, COLOR_RESET,
                vertical);
      } else if (i == j) {
        wprintf(L"%ls%*d%ls%lc", COLOR_GREEN, alignment, i * j, COLOR_RESET,
                vertical);
      } else {
        wprintf(L"%*d%lc", alignment, i * j, vertical);
      }
    }
    wprintf(L"\n");
    if (i == 10) {
      print_end_line(length, alignment);
    } else {
      print_mid_lines(length, alignment);
    }
  }
  wprintf(L"\n");
}

int main(void) {
  print_table(LEFT);
  return 0;
}
