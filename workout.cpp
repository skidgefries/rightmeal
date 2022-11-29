#include "workout.h"
#include "ui_workout.h"

#include "mainwindow.h"
MainWindow *mainwindowobj3;

#include "myprofile.h"
myprofile *myprofileobj3;

#include "dietplan.h"
dietplan *dietplanobj3;

#include "bmi.h"
bmi *bmiobj3;

#include "bodyfat.h"
BodyFAT *bodyfatobj3;

#include<QMessageBox>
workout::workout(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::workout)
{
    ui->setupUi(this);
}

workout::~workout()
{
    delete ui;
}


void workout::on_commandLinkButton_14_clicked()
{
    hide();
    mainwindowobj3= new MainWindow(this);
    mainwindowobj3->show();
}


void workout::on_commandLinkButton_4_clicked()
{
    hide();
    myprofileobj3=new myprofile(this);
    myprofileobj3->show();
}


void workout::on_commandLinkButton_9_clicked()
{
    hide();
    dietplanobj3=new dietplan(this);
    dietplanobj3->show();
}


void workout::on_commandLinkButton_11_clicked()
{
    hide();
    bmiobj3=new bmi(this);
    bmiobj3->show();
}


void workout::on_commandLinkButton_12_clicked()
{
    hide();
    bodyfatobj3=new BodyFAT(this);
    bodyfatobj3->show();
}


void workout::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}


void workout::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void workout::on_pushButton_4_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}


void workout::on_pushButton_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}


void workout::on_pushButton_5_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
}


void workout::on_pushButton_6_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
}


void workout::on_pushButton_7_clicked()
{
     ui->stackedWidget->setCurrentIndex(7);
}


void workout::on_pushButton_8_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void workout::on_pushButton_9_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void workout::on_pushButton_10_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void workout::on_pushButton_11_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void workout::on_pushButton_12_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void workout::on_pushButton_13_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void workout::on_pushButton_14_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}


//triceps
void workout::on_pushButton_15_clicked()
{
    QMessageBox::information(this,"Diamond Push-Up","How to Do a Diamond Push-Up:\n\n "
                                                    "1. Begin the move by positioning the hands on the mat directly under the chest with the fingers spread and the thumbs and forefingers touching, making a diamond shape. \n\n"
                                                    "2. Straighten the legs into a plank position, or keep the knees on the floor for a more accessible version. \n\n"
                                                    "3. Make sure the back is flat and the abs are engaged as you bend the elbows, lowering until your chin or chest touches the mat. If you can't go that low, go as low as you can—then work to build enough strength to lower all the way down over time.\n\n "
                                                    "4. At the bottom of the movement, your elbows should stay close to your sides. 5. Press back to start, keeping the torso rigid, and repeat for 1 to 3 sets of 8 to 16 reps.");
}

void workout::on_pushButton_16_clicked()
{
    QMessageBox::information(this,"Kickbacks","How to Do Triceps Kickbacks:\n\n "
                             "1. Prop the right foot on a step or platform, resting the right forearm on the thigh to support the back, or allowing the arm to drop directly below the shoulder.\n\n"
                             "2. Hold a weight in the left hand and pull the elbow up to torso level. \n\n"
                             "3. Keeping the elbow in that position, extend the arm behind you, focusing on contracting the triceps muscle. \n\n"
                             "4. Lower the forearm down to about 90 degrees and repeat for 1 to 3 sets of 8 to 16 reps. \n\n"
                             "5. Focus on keeping the upper arms stationary against the body throughout the exercise.");
}

void workout::on_pushButton_17_clicked()
{
    QMessageBox::information(this,"Overhead Triceps Extensions","How to Do an Overhead Triceps Extension:\n\n"
                             "1. Sit on a chair, bench, ball, or stand; keep back straight. Hold a weight in both hands, extending it up overhead. \n\n"
                             "2. Keep your biceps close to your ears and elbows pointing forward as you lower the weight behind your head until the elbows are at about 90-degree angles. \n\n"
                             "3. Straighten the arms, contracting the triceps, and then repeat for 1 to 3 sets of 8 to 16 reps. \n\n"
                             "4. Keep the abs engaged throughout the exercise and avoid arching the back.");
}

void workout::on_pushButton_18_clicked()
{
    QMessageBox::information(this,"Triceps Dip","How to Do a Triceps Dip:\n\n"
                             "1. Sit on a chair or bench with your hands just outside the hips, with the knees bent or the legs extended straight out (harder).\n\n"
                             "2. Lift up onto the hands and, keeping the hips very close to the chair or bench, and bend your elbows, lowering down until they're at about 90 degrees.\n\n"
                             "3. Keep the elbows pointing behind you, the shoulders down, and the abs engaged.\n\n"
                             "4. Push back to start and repeat for 1 to 3 sets of 8 to 16 reps.\n\n"
                             "5. Avoid this exercise if you feel any pain in the shoulders.");
}

void workout::on_pushButton_19_clicked()
{
    QMessageBox::information(this,"Rope Pushdown","How to Do a Rope Pushdown:\n\n"
                             "1. At a cable machine with a rope attachment, hold the rope near the knotted ends and begin the exercise with the elbows bent at about 90 degrees. Your elbows should be next to your torso.\n\n"
                             "2. Extend the arms, taking the hands down towards the floor, spreading the rope slightly out on either side as you contract the triceps.\n\n"
                             "3. Bring the forearms back to start and repeat for 1 to 3 sets of 8 to 16 reps.");
}

void workout::on_pushButton_20_clicked()
{
    QMessageBox::information(this,"Skull Crusher","How To Do a Skull Crusher:\n\n"
                             "1. Lie on a bench, step, or floor and hold a barbell or dumbbells with your hands about shoulder distance apart.\n\n"
                             "2. Begin the exercise by extending the weight up over the head with your palms facing out and thumbs next to the fingers.\n\n"
                             "3. Bend the elbows and lower the weight until the elbows are at about 90-degree angles. This would be the part of the exercise where you wouldn't want to crush your skull by going too low.\n\n"
                             "4. Squeeze the triceps to straighten the arms without locking the joints.\n\n"
                             "5. Repeat for 1 to 3 sets of 8 to 16 reps.");
}

void workout::on_pushButton_21_clicked()
{
    QMessageBox::information(this,"Biceps Curl","How To Do A Biceps Curl:\n\n"
                             "1. Stand with feet about hip-width apart, abs engaged as you hold medium-heavy dumbbells in front of the thighs. Palms should face forward.\n\n"
                             "2. Squeeze the biceps and bend the arms, curling the weights towards the shoulders.\n\n"
                             "3. Keep the elbows stationary and only bring the weight as high as you can without moving the elbows.\n\n"
                             "4. Slowly lower the weights, keeping a slight bend in the elbows at the bottom (e.g., don't lock the joints and try to keep tension on the muscle).\n\n"
                             "5. Repeat for 1-3 sets of 8-15 reps.");
}

void workout::on_pushButton_22_clicked()
{
    QMessageBox::information(this,"Preacher Curls","How To Do A Preacher Curl:\n\n"
                             "1. Holding weights, kneel in front of the ball and drape yourself over it, placing the elbows halfway down the ball and parallel to one another.\n\n"
                             "2. Lower the weights until the arms are almost fully extended.\n\n"
                             "3. Contract the biceps to raise the weights until the forearms are vertical to the back of the upper arm.\n\n"
                             "4. Repeat for 1-3 sets of 10-16 reps.");
}

void workout::on_pushButton_23_clicked()
{
    QMessageBox::information(this,"Hammer Curls","How To Do A Hammer Curl:\n\n"
                             "1. Stand with feet about hip-width apart, abs engaged as you hold medium-heavy dumbbells in front of the thighs.\n\n"
                             "2. Turn the hands, so the palms face each other (keeping the hands apart, with weights in front of the thighs). Squeeze the biceps to curl the weights towards the shoulders.\n\n"
                             "3. Keep the elbows stationary and only bring the weight as high as you can without moving the elbows.\n\n"
                             "4. Slowly lower the weights, keeping a slight bend in the elbows at the bottom (e.g., don't lock the joints and try to keep tension on the muscle).\n\n"
                             "5. Repeat for 1-3 sets of 8-15 reps.");
}

void workout::on_pushButton_24_clicked()
{
    QMessageBox::information(this,"Concentration Curls","How To Do A Concentration Curl:\n\n"
                             "1. Sit or kneel and hold a dumbbell in the right hand.\n\n"
                             "2. Bend forward, keeping the abs engaged, and prop the right elbow against the inside of the right thigh.\n\n"
                             "3. Contract the bicep and curl the hand towards the shoulder without moving the elbow. You don't have to touch your shoulder.\n\n"
                             "4. Lower all the way down (keep a very slight bend in the elbow to keep tension in the biceps) and repeat for 1-3 sets of 8-16 reps on each side.");
}

void workout::on_pushButton_25_clicked()
{
    QMessageBox::information(this,"Reverse Curls","How To Do A Reverse Curl:\n\n"
                             "1. Hold medium-heavy dumbbells in front of the thighs with palms facing the thighs.\n\n"
                             "2. Curl the weight up towards the shoulders so that the forearms are vertical and the palms face out.\n\n"
                             "3. Lower back down and repeat for 1-3 sets of 8-16 reps.\n\n"
                             "4. It's normal for your hands to widen at an angle at the top of the movement.\n\n"
                             "5. You can also do this move with a barbell.");
}

void workout::on_pushButton_26_clicked()
{
    QMessageBox::information(this,"Barbell Bicep Curls","How To Do A Barbell Bicep Curl:\n\n"
                             "1. Stand with feet about hip-width apart, abs engaged as you hold the weight in front of the thighs, palms facing up.\n\n"
                             "2. Squeeze the biceps and bend the arms, curling the weight towards the shoulders.\n\n"
                             "3. Keep the elbows stationary and only bring the weight as high as you can without moving the elbows.\n\n"
                             "4. Slowly lower the weight, keeping a slight bend in the elbows at the bottom (e.g., don't lock the joints and try to keep tension on the muscle).\n\n"
                             "5. Repeat for 1-3 sets of 8-15 reps.");
}

//legs
void workout::on_pushButton_27_clicked()
{
    QMessageBox::information(this,"Standing Calf Raises","How To Do A Standing Calf Raise:\n\n"
                             "1. Stand next to a wall with your feet hip-distance apart.\n\n"
                             "2. Place one or both hands on the wall for support. Engage your core and check your posture to make sure your ears are 'stacked' above your shoulders, hips, knees, and ankles.\n\n"
                             "3. From here, press through the balls of your feet and squeeze your calves to lift your heels away from the floor.\n\n"
                             "4. Rise as high as you comfortably can on the balls of your feet.\n\n"
                             "5. Squeeze at the top for a beat, then slowly lower your heels back toward the floor.");
}

void workout::on_pushButton_28_clicked()
{
    QMessageBox::information(this,"Alternative Reverse Lunges","How To Do A Reverse Lunge:\n\n"
                             "1. Stand tall, your feet hip distance apart. Check your posture and engage your core.\n\n"
                             "2. Step your right foot backward about two to three feet and plant the ball of your right foot on the ground. Shift your weight slightly backward so your torso is evenly aligned between your left and right foot.\n\n"
                             "3. Your feet should still be hip-distance apart (your right foot shouldn't be directly behind your left—you want to maintain a solid base of support).\n\n"
                             "4. Keeping your torso upright and your core engaged, bend both knees, lowering your right knee toward the ground.\n\n"
                             "5. Just before your knee touches down, reverse the movement and press through your left heel and the ball of your right foot, stepping your right foot forward to return to the starting position.\n\n"
                             "6. Repeat the exercise to the opposite side to complete a full repetition.");
}

void workout::on_pushButton_29_clicked()
{
    QMessageBox::information(this,"Barbell Squats","How To Do A Barbell Squat:\n\n"
                             "1. Set a barbell on a squat rack to be the same height as your upper chest.\n\n"
                             "2. Stand under the bar, bending your knees, so the bar rests high on the back of your shoulders, across your traps.\n\n"
                             "3. Grip the bar overhand with your hands wider than your shoulders.\n\n"
                             "4. Straighten your legs to lift the barbell from the rack, and take one step back with both feet, standing with your legs shoulder-width apart or in a comfortable stance.\n\n"
                             "5. Hinge your hips backward, bending your knees and pushing them out in the direction of your toes. Do not allow your knees to cave in.\n\n"
                             "6. Continue lowering until your thighs are at least parallel to the floor or until your calves touch your glutes if you have the mobility without your lower back rounding (butt wink). \n\n"
                             "7. Hold for a count of one.\n\n"
                             "8. Push through your feet and straighten your hips and knees until standing.\n\n"
                             "9. Adjust your stance and grip before continuing to the next repetition.\n\n");
}

void workout::on_pushButton_30_clicked()
{
    QMessageBox::information(this,"Deadlift","How To Do A Deadlift:\n\n"
                             "1. Place a barbell on the floor and stand facing the barbell with your legs close to the bar, feet about shoulder-width.\n\n"
                             "2. Squat down with your back straight to grip the bar with an overhand grip at shoulder width.\n\n"
                             "3. Keep your arms fully extended as if they are hooks, and stand up with the barbell by pushing your feet into the ground as if you are pushing the ground away from you. Keep the bar close to your shins.\n\n"
                             "4. Raise your hips and shoulders at the same time (don't allow your hips to shoot up first).\n\n"
                             "5. Stand straight, lock out your hips and contract your glutes. Rotate your shoulders back.\n\n"
                             "6. Reverse the motion, keeping the bar close to your body.");
}

void workout::on_pushButton_31_clicked()
{
    QMessageBox::information(this,"Leg-Press","How To Do A Leg-Press:\n\n"
                             "1. Sit on a leg press machine and place your legs on the platform at shoulder width in front of you.\n\n"
                             "2. Disengage the safety bars and press through your heels to raise the platform until your legs are fully extended.\n\n"
                             "3. Lower the platform with control as deeply as you can with your mobility.\n\n"
                             "4. Push through your feet and engage your quadriceps while returning to the starting position.\n\n"
                             "5. Engage the safety pins when you are finished with your reps.");
}

void workout::on_pushButton_32_clicked()
{
    QMessageBox::information(this,"Leg Curl","How To Do A Leg Curl:\n\n"
                             "1. Get into the leg curl machine lying flat on your stomach with the roller pad just above your heels. Grab the support bars on either side of the machine.\n\n"
                             "2. Engage your core and lift your feet, pulling the pad toward your butt.\n\n"
                             "3. Pause at the top, then return to the starting position in a controlled manner.");
}

//chest
void workout::on_pushButton_33_clicked()
{
    QMessageBox::information(this,"Push-Ups","How To Do A Push-Up:\n\n"
                             "1. Get down on your hands and knees, positioning the hands a bit wider than the shoulders.\n\n"
                             "2. Push the knees up so that you're resting on the hands and toes. Keep the abs engaged and make sure your body is in a straight line from head to heels.\n\n"
                             "3. Bend the elbows and lower into a push-up until your elbows are at about 90 degrees.\n\n"
                             "4. Press back to start and repeat for 1 to 3 sets of 10 to 16 reps.");
}

void workout::on_pushButton_34_clicked()
{
    QMessageBox::information(this,"Bench Press","How To Do A Bench Press:\n\n"
                             "1. Lie down on a bench, step, or the floor. Begin with the barbell hovering just over the chest with your elbows bent. Place your hands on the bar a bit wider than your shoulders.\n\n"
                             "2. Contract the chest and push the weight straight up over the chest until the arms are fully extended and elbows are locked.\n\n"
                             "3. Bending the elbows, lower the weight down until the barbell touches your chest. Usually, this will mean your elbows are just below the level of the chest.\n\n"
                             "4. Repeat for 1 to 3 sets of 8 to 16 reps.");
}


void workout::on_pushButton_35_clicked()
{
    QMessageBox::information(this,"Dumbbell Chest Press","How To Do A Dumbbell Chest Press:\n\n"
                             "1. Lie down on a bench or step and begin with the weights in each hand straight up over the chest. Hold the dumbbells as if they are one barbell (in a straight line perpendicular to the body). Or use a neutral grip, where the palms are facing one another.\n\n"
                             "2. Bend the elbows and lower the arms down until the elbows are just below the chest (arms should look like goal posts).\n\n"
                             "3. Press the weights back up, completely extending the arms, and bring the weights closer together.\n\n"
                             "4. Repeat for 1 to 3 sets of 8 to 16 reps.");
}


void workout::on_pushButton_36_clicked()
{
    QMessageBox::information(this,"Standing Chest Press With Resistance Bands","How To Do A Chest Press With Resistance Bands:\n\n"
                             "1. Wrap the band around something stable behind you and hold handles in both hands so that the bands run along the inside of the arms.\n\n"
                             "2. Position yourself far enough away so that you have tension on the bands.\n\n"
                             "3. Begin the movement with the arms bent, palms facing down.\n\n"
                             "4. Squeeze your chest muscles and press your arms straight out in front of you, keeping the band stable.\n\n"
                             "5. Repeat for 1 to 3 sets of 8 to 16 reps.");
}


void workout::on_pushButton_37_clicked()
{
    QMessageBox::information(this,"Chest Fly With Dumbbells","How To Do A Chest Fly With Dumbbells:\n\n"
                             "1. Lie on the floor, bench, or step. Hold weights over the chest with the palms facing each other.\n\n"
                             "2. Keeping the elbows slightly bent, lower the arms out to the sides and down until they're level with the chest.\n\n"
                             "3. Keep the elbows in a fixed position and avoid lowering the weights too low.\n\n"
                             "4. Squeeze your chest to bring the arms back up as though you're hugging a tree.\n\n"
                             "5. Repeat for 1 to 3 sets of 8 to 16 reps.");
}


void workout::on_pushButton_38_clicked()
{
    QMessageBox::information(this,"Bench Dips","How To Do A Bench Dip:\n\n"
                             "1. Get into position with a bench behind you.\n\n"
                             "2. Tighten your core and lower your body off the bench.\n\n"
                             "3. Keep your head and upper body straight.\n\n"
                             "4. Hold the dipped position for 1-2 seconds before pushing back up.\n\n"
                             "5. Move yourself up and down without returning to the bench.");
}


//back
void workout::on_pushButton_39_clicked()
{
    QMessageBox::information(this,"Back Extension","How To Do A Back Extension:\n\n"
                             "1. Lie face down on a mat and place the hands on the floor or behind the head (more advanced).\n\n"
                             "2. Contract the abs and keep them contracted throughout the exercise.\n\n"
                             "3. Squeeze the back to lift the chest a few inches off the floor.\n\n"
                             "4. Lower and repeat for 1-3 sets of 10-16 reps total on each arm.");
}

void workout::on_pushButton_40_clicked()
{
    QMessageBox::information(this,"Dumbbell Pullover","How To Do A Dumbbell Pullover:\n\n"
                             "1. Lie face-up on the ball with the head and shoulders supported, weight resting over the chest.\n\n"
                             "2. Keep the glutes contracted to lift the body into a bridge position, making a straight line from knees to head.\n\n"
                             "3. Take the weight straight up over the chest, arms slightly bent. You can hold a dumbbell on either side or use a medicine ball.\n\n"
                             "4. Keeping the body tight and stable, slowly lower the weight behind you, keeping the elbows slightly bent.\n\n"
                             "5. Lower the weight as far as your flexibility allows only and try not to lower the weight below your head.\n\n"
                             "6. Contract the back muscles to pull the weight back up over the chest and complete 1-3 sets of 10-16 reps.");
}


void workout::on_pushButton_41_clicked()
{
    QMessageBox::information(this,"Barbell Row","How To Do A Barbell Row:\n\n"
                             "1. Bend forward at the waist until you're at about a 45-degree angle with the feet about hip-distance apart and hands a bit wider than shoulders on the bar.\n\n"
                             "2. Keep the shoulders back, the knees slightly bent and the abs tight and look straight forward.\n\n"
                             "3. Begin the movement by taking the weight out in front of the knees.\n\n"
                             "4. Bend the elbows and contract the back to pull the weight in towards the bellybutton, following the line of the legs.\n\n"
                             "5. Bring the elbows just past the torso and squeeze the back.\n\n"
                             "6. Lower down and repeat for 1-3 sets of 8-16 reps.");
}


void workout::on_pushButton_42_clicked()
{
    QMessageBox::information(this,"One-Arm Row","How To Do A One Arm Row:\n\n"
                             "1. Place the left foot on a step or platform and rest the left hand or forearm on the upper thigh.\n\n"
                             "2. Hold a medium-heavy weight in the right hand, tip forward keeping the back flat and the abs in, and hang the weight down towards the floor.\n\n"
                             "3. Bend the elbow and pull it up in a rowing motion until it is level with the torso or just above it.\n\n"
                             "4. Squeeze the back while keeping the hips square and the abs engaged at the top of the movement.\n\n"
                             "5. Lower down and repeat for 1-3 sets of 10-16 reps, then switch sides.");
}


void workout::on_pushButton_43_clicked()
{
    QMessageBox::information(this,"Pulldown With A Band","How To Do A Pulldown With A Band:\n\n"
                             "1. Stand or sit and hold a band in both hands above your head. Hands are a bit wider than shoulder-width.\n\n"
                             "2. Sit up straight and keep the abs engaged.\n\n"
                             "3. Keep the left hand stable and contract the lat muscles on the right side to pull the elbow down towards the ribcage.\n\n"
                             "4. Return to start and repeat for 1-3 sets of 10-16 reps before switching sides.");
}


void workout::on_pushButton_44_clicked()
{
    QMessageBox::information(this,"Pullup","How To Do A Pull-Up:\n\n"
                             "1. Grab a pullup bar with an overhand grip, placing your hands wider than shoulder-width apart.\n\n"
                             "2. Lift your feet off the floor — or place them in the assist band — and hang from your arms.\n\n"
                             "3. Pull your body up to the bar by bending your arms and pulling your shoulder blades toward the floor.\n\n"
                             "4. Once your chin crosses the bar, lower your body back down.\n\n"
                             "5. Complete 1–3 sets of 8–12 reps.");
}

//shoulders
void workout::on_pushButton_45_clicked()
{
    QMessageBox::information(this,"Dumbbell Overhead Press","How To Do A Dumbbell Overhead Press:\n\n"
                             "1. Exhale as you raise the weights above the head in a controlled motion.\n\n"
                             "2. Pause briefly at the top of the motion.\n\n"
                             "3. Inhale and return the dumbbells to the shoulders." );
}

void workout::on_pushButton_46_clicked()
{
    QMessageBox::information(this,"Front Raise","How To Do A Front Raise:\n\n"
                             "1. Stand tall with your feet shoulder-width apart, holding a dumbbell in each hand with palms facing your body.\n\n"
                             "2. Brace your core, then slowly raise one or both dumbbells, stopping when your arms are shoulder height.\n\n"
                             "3. Pause at the top before slowly lowering back to starting position.\n\n"
                             "4. Repeat on the other side if doing one arm at a time." );
}


void workout::on_pushButton_47_clicked()
{
    QMessageBox::information(this,"Lateral Raise","How To Do A Lateral Raise:\n\n"
                             "1. Stand up straight with a dumbbell in each hand, your arms resting at your sides. Keep your feet shoulder width apart, and don’t forget to maintain good posture.\n\n"
                             "2. Keeping your arms straight, lift your arms out to the side, stopping once your arms are perpendicular to the rest of your body.\n\n"
                             "3. Gently reverse the motion until you are back in your original position.");
}


void workout::on_pushButton_48_clicked()
{
    QMessageBox::information(this,"Reverse Fly","How To Do A Reverse Fly:\n\n"
                             "1. Raise both arms out to your side on an exhale. Keep a soft bend in your elbows. Squeeze the shoulder blades together as you pull them toward the spine.\n\n"
                             "2. Lower the weight back to the start position as you inhale. Avoid hunching your shoulders, and keep your chin tucked to maintain a neutral spine during the exercise.");
}


void workout::on_pushButton_49_clicked()
{
    QMessageBox::information(this,"Shoulder Pushup","How To Do A Shoulder Push Up:\n\n"
                             "1. Stand with feet hip width.\n\n"
                             "2. Tip forward at hips, bending at knees until you can place both hands on floor in front of feet.\n\n"
                             "3. Walk your hands out and away from your feet until your body is in an upside­down 'V' position.\n\n"
                             "4. Press your chest back towards your thighs.\n\n"
                             "5. Extend your left leg straight up towards the ceiling.\n\n"
                             "6. Bending both elbows, bring your head toward the ground (keeping chin into your chest).\n\n"
                             "7. Press away from the floor and straighten your arms");
}


void workout::on_pushButton_50_clicked()
{
    QMessageBox::information(this,"Arnold Press","How To Do An Arnold Press:\n\n"
                             "1. Set up an adjustable angle bench to 90 degrees and select the desired weight from the rack.\n\n"
                             "2. Pick up the dumbbells from the floor using a neutral grip (palms facing in). Position the end of the dumbbells on your knees and sit down on the bench.\n\n"
                             "3. Using a safe and controlled motion, kick your knees up one at a time in order to get each dumbbell into place.\n\n"
                             "4. Once the dumbbells are in place, rotate your palms so they are facing you.\n\n"
                             "5. Take a deep breath then press the dumbbells overhead by extending the elbows and contracting the deltoids.\n\n"
                             "6. As you press, rotate the dumbbells until your palms are facing forward.\n\n"
                             "7. Slowly lower the dumbbells back to the starting position (the arms should be roughly 90 degrees or slightly lower depending upon limb lengths).\n\n"
                             "8. Repeat for the desired number of repetitions.");
}

//abs
void workout::on_pushButton_51_clicked()
{
    QMessageBox::information(this,"Bicycle Crunches","How To Do A Bicycle Crunch:\n\n"
                             "1. Lie face up on your mat and place your hands behind your head, lightly supporting it with your fingers.\n\n"
                             "2. Bring the knees into the chest and lift the shoulder blades off the floor without pulling on the neck.\n\n"
                             "3. Rotate to the left, bringing the right elbow towards the left knee as you straighten the other leg.\n\n"
                             "4. Switch sides, bringing the left elbow towards the right knee.\n\n"
                             "5. Continue alternating sides in a pedaling motion for 1 to 3 sets of 12-16 reps.");
}

void workout::on_pushButton_52_clicked()
{
    QMessageBox::information(this,"Captain's Chair Leg Raise","How To Do A Captain’s Chair Leg Raise:\n\n"
                             "1. Stand on the chair and grip handholds to stabilize your upper body.\n\n"
                             "2. Press your back against the pad and keep the shoulders relaxed.\n\n"
                             "3. Bend the knees and contract the abs to lift the knees to hip level.\n\n"
                             "4. Try not to arch the back or swing the legs up.\n\n"
                             "5. Lower back down slowly and repeat for 1 to 3 sets of 12-16 reps.");
}

void workout::on_pushButton_53_clicked()
{
    QMessageBox::information(this,"Vertical Leg Crunch","How To Do A Vertical Leg Crunch:\n\n"
                             "1. Lie on the floor and extend the legs straight up with knees crossed.\n\n"
                             "2. Place your hands behind the head for support, but avoid pulling on the neck.\n\n"
                             "3. Contract the abs to lift the shoulder blades off the floor, as though reaching your chest towards your feet.\n\n"
                             "4. Keep the legs in a fixed position and imagine bringing your belly button towards your spine at the top of the movement.\n\n"
                             "5. Lower and repeat for 1 to 3 sets of 12-16 reps.");
}

void workout::on_pushButton_54_clicked()
{
    QMessageBox::information(this,"Plank","How To Do A Plank:\n\n"
                             "1. Lie face down on mat resting on the forearms, palms flat on the floor.\n\n"
                             "2. Push off the floor, raising up onto toes and resting on the elbows.\n\n"
                             "3. Keep your back flat, in a straight line from head to heels.\n\n"
                             "4. Tilt your pelvis and contract your abdominals to prevent your rear end from sticking up in the air or sagging in the middle.\n\n"
                             "5. Hold for 20 to 60 seconds, lower and repeat for 3-5 reps.");
}

void workout::on_pushButton_55_clicked()
{
    QMessageBox::information(this,"Reverse Crunch","How To Do A Reverse Crunch:\n\n"
                             "1. Lie on the floor and place hands on the floor or behind the head.\n\n"
                             "2. Bring the knees in towards the chest until they're bent to 90 degrees, with feet together or crossed.\n\n"
                             "3. Contract the abs to curl the hips off the floor, reaching the legs up towards the ceiling.\n\n"
                             "4. Lower and repeat for 1 to 3 sets of 12-16 reps.\n\n"
                             "5. Try to use your abs to lift your hips rather than swinging your legs and creating momentum.");
}

void workout::on_pushButton_56_clicked()
{
    QMessageBox::information(this,"V-Sit","How To Do A V-Sit:\n\n"
                             "1. Contract your abdominal muscles and core slowly and lift your legs up to an extended position at a 45-degree angle with your torso.\n\n"
                             "2. Reach your arms straight forward or reach up toward your shins as you are able. It's important to maintain good core posture and a strong spine throughout the movement and to avoid rounding the shoulders forward. Don't hold your breath—continue to breathe deeply during the movement.\n\n"
                             "3. Hold this V-shaped position for several seconds to begin. As you get stronger, hold the position longer.\n\n"
                             "4. Return to your starting position slowly while continuing to keep your abs engaged and tight.\n\n"
                             "5. Just before you reach the floor, stop and hold the position for a few seconds.\n\n"
                             "6. Repeat this entire movement several times.");
}

void workout::on_commandLinkButton_13_clicked()
{
    hide();
    settingsobj2 = new settings(this);
    settingsobj2->show();
}

