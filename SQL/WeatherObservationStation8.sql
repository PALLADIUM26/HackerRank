-- select distinct city from station where city like "A%A" or city like "E%E" or city like "I%I" or city like "O%O" or city like "U%U";

SELECT DISTINCT CITY FROM STATION WHERE SUBSTRING(CITY, 1, 1) IN ('a', 'e', 'i', 'o', 'u') AND SUBSTRING(CITY, -1, 1) IN ('a', 'e', 'i', 'o', 'u');