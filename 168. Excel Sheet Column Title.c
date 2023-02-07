char * convertToTitle(int columnNumber){

    char *ret;
    ret = (char *)malloc(8 * sizeof(char));

    // assign the last value to '\0'
    ret = ret + 7;
    *ret = '\0';

    while(columnNumber > 0)
    {
        columnNumber -= 1;

        // set ret index, then assign value to *ret
        ret--;
        *ret = 'A' + (columnNumber % 26);

        columnNumber /= 26;
    }

    return ret;
}