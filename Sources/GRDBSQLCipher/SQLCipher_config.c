#include <SQLCipher/sqlite3.h>

int grdb_sqlcipher_link_check(void) {
    return sqlite3_libversion_number();
}
