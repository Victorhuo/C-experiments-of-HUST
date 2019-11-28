if (x - 1 >= 0 && status[x - 1][y] != true && ma[x - 1][y] != 1)
        {
            status[x][y] = true;
            go(ma, status, x - 1, y);
        }