## N'th Highest CGPA
```sql
CREATE TABLE student (
  name TEXT,
  cgpa INT
);

INSERT  INTO student(name,cgpa) VALUES ('amran',80),('rifat',90),('alamin',100),('forkan',60),('mithun',50),('rahat',70);

SELECT * FROM student;

SELECT * FROM student s1 WHERE 3-1 = (

	SELECT COUNT( DISTINCT cgpa ) FROM student s2
	WHERE s2.cgpa > s1.cgpa
	
);
```
