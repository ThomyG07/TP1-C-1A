class NotifierCollision
{
public:
	void addObserver(ObserverCollision obs);
	void removeObserver(ObserverCollision obs);
	void notify(int x, int y);
};