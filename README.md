# Panager
Panager is a client of sql database containing pdf or image file as a blob field. It
is written in QT4 framework. As it can display content of pdf files
it has libpoppler-qt4 as dependency. 
It needs libqt4-sql-mysql for using mysql database also.

To compile and run you need qt4 framework. Just run in main folder:

```bash
qmake
make
```

It is possible that you need to change paths in panager.pro file. For example in Ubuntu 13.04
instead of

```
LIBS    += /usr/lib64/libmysqlclient.so
LIBS += -L/usr/local/lib -lpoppler-qt4
```


just put:

```
LIBS    += /usr/lib/x86_64-linux-gnu/libmysqlclient.so
LIBS += -L/usr/local/lib -lpoppler-qt4
```
##Config file
You need also conf.cnf file under ~/.panager/ directory.

For mysql database, it can be of the form:

```
sqlDriver=QMYSQL
host=example.com
login=user
password=secred_password
base=test
table=pdf
fields=id,;file,name,remarks
keySearch=name
```
Only two last lines are not self-explanatory.
The fields contain the names of sql column's names separated by comma, and exactly one field preceded by semicolon
(file in the above example). This field is of sql type BLOB, and MUST contain pdf or image data (png, jpg).
keySearch equals to one of the non-BLOB field which is used in interactive search (which is activated only
 if live checkbox is marked). Each table must fulfil one constrain: the first column is autoincremented primary key.
