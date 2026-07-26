/* Write your T-SQL query statement below */
select e.name AS Employee
from employee e
join employee m 
on e.managerId = m.Id 
where e.salary > m.salary
