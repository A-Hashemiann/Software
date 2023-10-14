
//create basic js objects with dynamic and static varible 
const Module_01={

Static_Func: function(){
    let x=0
    console.log("hello world");
    console.log(this.Var_01)
    return ++x;
},


Dynammic_Func : new Date().toLocaleDateString(),


Var_01: 0,

Func_01: ()=>{
 
 return this.Var_01++

},



};



module.exports=  Module_01