{dede:field name=typeid runphp="yes"}
                                global $dsql;
                                $sql = "SELECT id From `lk_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
                                $row = $dsql->GetOne($sql); 
                           
                                {/dede:field}