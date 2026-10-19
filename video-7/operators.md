| Precedence | Operator | Description | Associativity |
|:---:|:---|:---|:---|
| 1 | `++` `--` | Suffix/postfix increment and decrement | Left-to-right |
|  | `()` | Function call | |
|  | `[]` | Array subscripting | |
|  | `.` | Structure and union member access | |
|  | `->` | Structure and union member access through pointer | |
|  | `(`*`type`*`){`*`list`*`}` | Compound literal (C99) | |
| 2 | `++` `--` | Prefix increment and decrement [[1]](https://en.cppreference.com/w/c/language/operator_precedence#cite_note-1) | Right-to-left |
|  | `+` `-` | Unary plus and minus | |
|  | `!` `~` | Logical NOT and bitwise NOT | |
|  | `(`*`type`*`)` | Cast | |
|  | `*` | Indirection (dereference) | |
|  | `&` | Address-of | |
|  | `sizeof` | Size-of [[2]](https://en.cppreference.com/w/c/language/operator_precedence#cite_note-2) | |
|  | `_Alignof` | Alignment requirement (C11) | |
| 3 | `*` `/` `%` | Multiplication, division, and remainder | Left-to-right |
| 4 | `+` `-` | Addition and subtraction | Left-to-right |
| 5 | `<<` `>>` | Bitwise left shift and right shift | Left-to-right |
| 6 | `<` `<=` | For relational operators < and ≤, respectively | Left-to-right |
|  | `>` `>=` | For relational operators > and ≥, respectively | |
| 7 | `==` `!=` | For relational = and ≠, respectively | Left-to-right |
| 8 | `&` | Bitwise AND | Left-to-right |
| 9 | `^` | Bitwise XOR (exclusive OR) | Left-to-right |
| 10 | `\|` | Bitwise OR (inclusive OR) | Left-to-right |
| 11 | `&&` | Logical AND | Left-to-right |
| 12 | `\|\|` | Logical OR | Left-to-right |
| 13 | `?:` | Ternary conditional [[3]](https://en.cppreference.com/w/c/language/operator_precedence#cite_note-3) | Right-to-left |
| 14 [[4]](https://en.cppreference.com/w/c/language/operator_precedence#cite_note-4) | `=` | Simple assignment | Right-to-left |
|  | `+=` `-=` | Assignment by sum and difference | |
|  | `*=` `/=` `%=` | Assignment by product, quotient, and remainder | |
|  | `<<=` `>>=` | Assignment by bitwise left shift and right shift | |
|  | `&=` `^=` `\|=` | Assignment by bitwise AND, XOR, and OR | |
| 15 | `,` | Comma | Left-to-right |
