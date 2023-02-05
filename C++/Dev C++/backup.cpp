    if(score>=120 && score<180)
    {		    
	  score2=60;
	  score3=60; 
	   
	  remainingscore= score- (score2+score3 ); 
	
	    for(i = 0 ; i<21 ; i++)
         {
			if(normalscore[i] == remainingscore )     
			score1= remainingscore;
			if(doublescore[i] == remainingscore)
			score1= remainingscore;
			if(triplescore[i] == remainingscore)
			score1= remainingscore;
			
			
			else
			{
			    if(remainingscore> 20)
			    {
				      for(int k=0 ; k<21;k++)
				      {
					      if( remainingscore - doublescore[k] ==2 ||  remainingscore - doublescore[k] ==3  )
					      score1=doublescore[k];
						   
				          if( remainingscore - triplescore[k] ==2 ||  remainingscore - triplescore[k] ==3  )
					      score1=triplescore[k]; 			          
					  
					  }
 						
				} 
			     			     			
			}
			
						 
	     }

	
	}   

