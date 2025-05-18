SELECT ROUND(LONG_W, 4) AS ROUNDED_LONG_W
FROM STATION
WHERE LAT_N = (
    SELECT max(LAT_N)
    FROM STATION
    WHERE LAT_N < 137.2345
);

-- select round(long_w) from station where lat_n = max(lat_n) and lat_n<137.2345;