void stay(){

}

void moveUp(){

}

void moveToDark(){
	/*
	Here is where the implementation for moving up to the dark should go.
	*/
	moveWithHorizontalVector(); // After we are at the height we want to be at, we should move with a horizontal vector
}

void moveToLight(){
	/*
	Here is where the implementation for moving up to the light should go.
	*/
	moveWithHorizontalVector(); // After we are at the height we want to be at, we should move with a horizontal vector
}

void moveToTopItem(){

}

void moveToBottomItem(){
	float[3] bottomCorrect;
	//Copy the position of the bottom item for the correct side.  whichItemIdIsBottom should return the id on the left for us (dependent on if we are left or right)
	api.getItemLoc(bottomCorrect, whichItemIdIsBottom());
	api.setPositionTarget(bottomCorrect);
}

void moveWithHorizontalVector(){
	float h_vector[3];
	h_vector[0] = 0;
	h_vector[1] = 1;
	h_vector[2] = 0;
	api.setVelocityTarget(h_vector);
	//Set the horizontal vector to keep moving
}

void move(float pos[3]){
	api.setPositionTarget(pos); //Move there
	//Takes an x,y,z and moves the sphere there
}