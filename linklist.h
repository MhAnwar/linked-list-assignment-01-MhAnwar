#ifndef linklist_H
#define linklist_H

class linklist
{ 
	private:
			complex *head,*tail;

	public:
			linklist();
	    
	
	

			void insertatstart(complex v);
	    
			void insertafterposition(int pos,complex c);
        
	     	void deleteatposition(int pos);
		
			void getvalueatpos(int po);
	   
            void showdatoflinklist();
        
};
#endif