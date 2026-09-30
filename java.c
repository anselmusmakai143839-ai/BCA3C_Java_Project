class MySyncThread extend Thread {
	private String threadName
	private SharedResource sharedResource;
	
	// Constractor to initialize tread name and shared redouce
	
}
@overrride
public void run (){
	shared Resource.printName(threadName
}
}
class sharedResource
{
	// synchrounize
	
	public synchrounize void 
	 printNumbers(String threadName){
		 for (i=1;i <=5
		 
		 
		 
public class syntread
{
	public static void main (string[]args){
	// create a sheres resource
	
	SharedResource sharedResource= new SharedResource();
	
	// create teo threads
	MySyncThread tread1 = new MySyncThread("Thread-1", sharedResource);
	MySyncThread tread2 = new MySyncThread("Thread-2", sharedResource);
	
	// start the tread
	tread1 start();
	tread2 start();
	}
}