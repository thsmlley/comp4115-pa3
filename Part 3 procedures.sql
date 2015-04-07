Delimiter //
create Procedure name (lname varchar(40))
Begin
select first_name, last_name from employees where last_name = lname;
End //

Delimiter //
create Procedure aSalary (deptNo char(4))
Begin
select avg(salary) from salaries where emp_no IN (select emp_no from dept_emp where dept_no =deptNo);
End //

Delimiter //
create procedure genderCount (G char(1))
Begin
select count(emp_no) from employees where gender = G;
End //
