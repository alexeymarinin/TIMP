# включить  " modAlphaCipher.h "
modAlphaCipher :: modAlphaCipher ( сопзЬ строку & SKEY)
{
    локаль loc ( " ru_RU.UTF-8 " ); // русская локаль для корректной смены регистратора
    wstring_convert <codecvt_utf8 < wchar_t >, wchar_t > кодек; // кодек UTF-8
    wstring ws = кодек. from_bytes (numAlpha); // перекодируем
    for ( unsigned i = 0 ; i <ws. size (); i ++) {
        alphaNum [ws [i]] = i;
    }
    ключ = преобразовать (скей);
}

Строка modAlphaCipher :: шифровать ( сопзЬ строку & open_text)
{
   vector < int > work = convert (open_text);
    for ( unsigned i = 0 ; i <work. size (); i ++) {
        work [i] = (work [i] + key [i% key. size ()])% alphaNum. размер ();
    }
    return  convert (работа);
}

Строка modAlphaCipher :: расшифровывать ( Const строка & cipher_text)
{
    vector < int > work = convert (cipher_text);
    for ( unsigned i = 0 ; i <work. size (); i ++) {
        work [i] = (work [i] + alphaNum. size () - key [i% key. size ()])% alphaNum. размер ();
    }
    return  convert (работа);
}

встроенный вектор < int > modAlphaCipher :: convert ( const string & s)
{
   vector < int > result;
    локаль loc ( " ru_RU.UTF-8 " ); // русская локаль для корректной смены регистратора
    wstring_convert <codecvt_utf8 < wchar_t >, wchar_t > кодек; // кодек UTF-8
    wstring ws = кодек. from_bytes (s); // перекодируем
    for ( unsigned i = 0 ; i <ws. size (); i ++) {
        результат. push_back (alphaNum [WS [i]]);
    }
    вернуть результат;
}

встроенная строка modAlphaCipher :: convert ( const vector < int > & v)
{
    строковый результат;
    локаль loc ( " ru_RU.UTF-8 " ); // русская локаль для корректной смены регистратора
    wstring_convert <codecvt_utf8 < wchar_t >, wchar_t > кодек; // кодек UTF-8
    wstring ws = кодек. from_bytes (numAlpha);
    wstring result_s = кодек. from_bytes ( " " );
    for ( unsigned i = 0 ; i <v. size (); i ++) {
        полученные результаты. push_back (ws [v [i]]);
    }
    результат = кодек. to_bytes (результат_с);
    вернуть результат;
}

    std :: string result;
    локаль loc ( " ru_RU.UTF-8 " ); // русская локаль для корректной смены регистратора
    wstring_convert <codecvt_utf8 < wchar_t >, wchar_t > кодек; // кодек UTF-8
    wstring ws = codec.from_bytes (numAlpha);
    wstring result_s = codec.from_bytes ( " " );
    for ( unsigned i = 0 ; i <v.size (); i ++) {
        полученные результаты. push_back (ws [v [i]]);
    }
    результат = codec.to_bytes (результат_с);
    вернуть результат;
}
