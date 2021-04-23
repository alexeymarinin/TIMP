# включить  " modAlphaCipher.h "
bool  isValid ( константная строка & s)
{
    std :: locale loc ( " ru_RU.UTF-8 " );
    std :: wstring_convert <std :: codecvt_utf8 < wchar_t >, wchar_t > кодек;
    std :: wstring ws = кодек. from_bytes (s);
    std :: string numAlpha = " АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ " ;
    std :: wstring wA = кодек. from_bytes (numAlpha);
    for ( unsigned  int i = 0 ; i <ws. size (); i ++) {
        if (wA. find (ws [i]) == string :: npos) {
            вернуть  ложь ;
        }
    }
    вернуть  истину ;
}
int  main ( int argc, char ** argv)
{
    строковый ключ;
    текст строки;
    беззнаковый op;
    cout << " Шифр готов. Ключ ввода: " ;
    cin >> key;
    if (! isValid (ключ)) {
        cerr << " недействительный ключ \ n " ;
        возврат  1 ;
    }
    cout << " Ключ загружен \ n " ;
    modAlphaCipher cipher (ключ);
    do {
        cout << " Шифр готов. Операция ввода (0-выход, 1-шифрование, 2-дешифрование): " ;
        cin >> op;
        if (op> 2 ) {
            cout << " Незаконная операция \ n " ;
        } else  if (op> 0 ) {
            cout << " Шифр готов. Входной текст: " ;
            cin >> текст;
            if ( isValid (текст)) {
                if (op == 1 ) {
                    cout << " Зашифрованный текст: " << cipher. encrypt (текст) << endl;
                } else {
                    cout << " Расшифрованный текст: " << cipher. расшифровать (текст) << endl;
                }
            } else {
                cout << " Операция прервана: неверный текст \ n " ;

            }
        }
    } while (op! = 0 );
    возврат  0 ;
}
