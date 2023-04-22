function test3() {
    var user = '{ "id": 1, "name": "longge1" }';
    var tuser = JSON.parse(user);
    return tuser.name;
}