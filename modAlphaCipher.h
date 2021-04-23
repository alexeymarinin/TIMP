# pragma once
# включить  < iostream >
# включить  < cstring >
# включить  < cctype >
# include  < строка >
# include  < locale >
# include  < codecvt >
# include  < вектор >
# include  < карта >
используя  пространство имен  std ;
класс  modAlphaCipher
{
частный:
    строка numAlpha =
        " АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ " ; // алфавит по порядку
    карта < char , int > alphaNum; // ассоциативный массив "номер по символу"
    вектор < int > ключ; // ключ
    vector < int > convert ( const string & s); // преобразование строка-вектор
преобразование     строки ( const vector < int > & v); // преобразование вектор-строка
общественность:
    modAlphaCipher () = удалить ; // запретим конструктор без параметров
    modAlphaCipher ( сопзЬ строку & SKEY); // конструктор для установки ключа
    строковое шифрование ( const string & open_text); // зашифрование
расшифровка     строки ( const string & cipher_text); // расшифрование
}
