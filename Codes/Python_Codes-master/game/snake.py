pen = turtle.Turtle("square")
pen.penup()
pen.pencolor("yellow")

food = turtle.Turtle()
food.shape("circle")
food.color("red")
food.foodsize(FOOD_SIZE / 20)
turtle "square" shape is 20.
food.penup()

screen.listen()
screen.onkey(go_up,"up")
screen.onkey(go_down,"down")
screen.onkey(go_left,"left")
screen.onkey(go_right,"right")

reset()
turtle.done()


def get_dir(pos1,pos2):
    x1,y1=pos1
    x2,y2=pos2
    distance = ((y2-y1)**2+(x2-x1)**2)**0.5
    return distance

def go_down():
    global snake_dir
    if snake_dir !="up":
        snake_dir ="down"
         
def go_left():
    global snake_dir
    if snake_dir !="right":
        snake_dir = "left"

def go_up():
    global snake_dir
    if snake_dir !="down":
        snake_dir = "up"

def go_right():
    global snake_dir
    if snake_dir !="left":
        snake_dir = "right"

screen = turtle.Screen()
screen.setup(HEIGHT,WIDTH)
screen.title("SNAKE GAME")
screen.bgcolor("Orange")
screen.setup(500,500)
screen.tracer(0)

def food_col():
    global food_pos
    if  get_dis(snake[-1], food_pos)<20:
        food_pos = get_random_food_pos()
        food.goto(food_pos)
        return True
    return False

def get_random_food_pos():
    x =random.radiant(-WIDTH/2+FOOD_SIZE,WIDTH/2-FOOD_SIZE)
    y =random.radiant(-HEIGHT/2+FOOD_SIZE,HIGHT/2-FOOD_SIZE)
    return(x,y)

def move_snake():
    global snake_dir
    new_head = snake[-1].copy()
    new_head[0] = snake[-1][0] + offsets[snake_dir][0]
    new_head[1] = snake[-1][1] + offsets[snake_dir][1]

def 