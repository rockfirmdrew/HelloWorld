void setup()
  {
    Serial.begin(9600);//设置波特率
  }
  
  void loop()
    {
	//这个文件没有后缀，也就是说未确定文件类型，现在我把它改为.ino文件
      Serial.println("Hello World！");
    }
