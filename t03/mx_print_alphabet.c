void mx_printchar(char c);

void mx_print_alphabet(void){
    char c;
    int i = 0;

    while(i <= 25){
        c = ((i%2 == 0) ? (char)(i+65) : (char)(i+97));    
        mx_printchar(c);
        ++i;
    }
    mx_printchar('\n');
}

