<li class="dropdown nav-dropdown">
                    {dede:field name=typeid runphp="yes"}
                    global $dsql;
                    $sql = "SELECT * From `lk_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc";
                    $row = $dsql->GetOne($sql); 
                    $sqls = "SELECT * From `lk_arctype` WHERE id='".$row['reid']."' And ishidden<>1 order by sortrank asc";
                    $pid = $dsql->GetOne($sqls); 
                    if(is_array($row)){

                    @me='<a href="javascript:;" class="has-drop-menu">'.$pid["typename"].'<i class="arrow"></i></a>';
                    }else{
                    @me='<a href='[field:typeurl/]' [field:rel/]>[field:typename/]</a>';
                    }
                    {/dede:field}


                    <ul class="dropdown-menu">
                        <div class="sort channel clearfix">
                            <p class="title">{dede:field name='typename'/}</p>
                            <ul>
                            </ul>
                        </div>
                        <div class="tags channel clearfix">
                            <ul>
                                {dede:channel  type="son" noself='yes'}
                                <li><a href='[field:typeurl/]' [field:rel/]>[field:typename/]</a></li>
                                {/dede:channel}
                            </ul>
                        </div>
                    </ul>
                </li>