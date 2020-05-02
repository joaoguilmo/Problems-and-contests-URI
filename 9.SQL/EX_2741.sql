select 'Approved: '||name as name, grade 
from students 
where grade>=7
Order by grade desc;