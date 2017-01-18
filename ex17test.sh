set -e
make ex17
echo "create database"
./ex17 testdb.dat c
echo "add jeff"
./ex17 testdb.dat s 1 jeff jeff@google.com
echo "add zed"
./ex17 testdb.dat s 2 zed zed@shaw.com
echo "make some copies of addresses"
./ex17 testdb.dat p 1 3
./ex17 testdb.dat p 2 4
./ex17 testdb.dat p 4 5
./ex17 testdb.dat l
echo "delete address 4"
./ex17 testdb.dat d 4
./ex17 testdb.dat l
echo "copy again"
./ex17 testdb.dat p 5 4
./ex17 testdb.dat l
echo "find jeff"
./ex17 testdb.dat f jeff
echo "complete!"

