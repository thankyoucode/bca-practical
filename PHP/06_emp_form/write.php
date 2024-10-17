<?php
function inputfield($name) {
    return '<input type=text name="'.$name.'">';
}
function tableRow($field, $data) {
    return '<tr> <th>'.$field.':</th> <td>'.$data.'</td> </tr>';
}
function addDataList($data) {
    echo '<legend>'.$data["legend"].'.</legend>
    <table>'.
        tableRow($data["field1"], $data["val1"]),
        tableRow($data["field2"], $data["val2"]),
        tableRow($data["field3"], $data["val3"]).'
    </table>';
}
?>