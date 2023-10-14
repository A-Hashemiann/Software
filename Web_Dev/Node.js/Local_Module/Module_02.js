
// create function 
const createCharacter = () => {
    const name = "Dynamic Input Data",
      age = 20;
    // ...
    // ...
    return { userName: name, userAge: age };
  };



  //function to object data transfer
  const { userName, userAge } = createCharacter();


  module.exports=  {

    x:userName,
    y:userAge
  };