<li class="dropdown nav-dropdown">
                {dede:field name=typeid runphp="yes"}
                global $dsql;
                $sql = "SELECT id From `lk_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
                $row = $dsql->GetOne($sql); 
                if(is_array($row)){
                echo '<a href="javascript:;" class="has-drop-menu">[field name='typename'/]<i class="arrow"></i></a>';
                }else{
                echo '<a href="[field name='typeurl'/]">[field name='typename'/]</a>';
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