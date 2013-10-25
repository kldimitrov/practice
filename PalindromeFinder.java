
public class PalindromeFinder {
	public static void main(String[] args) {
	int grand=0;
	for(int i=999;i>100;i--){
		for(int j=999;j>100;j--){
			int mul=i*j;
			//test
		//	mul=906609;
			System.out.println(mul);
			Integer m=new Integer(mul);
			String mulString=m.toString();
			if ((mulString.charAt(mulString.length()-2)==mulString.charAt(1))&&
					(mulString.charAt(mulString.length()-1)==mulString.charAt(0))&&
					(mulString.charAt(mulString.length()-3)==mulString.charAt(2))){
						System.out.println("thriple da");
						if(mul>grand)
							grand=mul;
					}
			else{
				System.out.println("ne");
			}
			System.out.println(grand);
		}
		

	}
	/*
	Integer i=312341234;
	String str=i.toString();
	
	StringBuffer sb=new StringBuffer(str);
	System.out.println(sb.reverse().toString());
	if(i.equals(sb.reverse().toString())){
		System.out.println("da");
	}else{
		System.out.println("ne");
	}*/
}
}
