#ifdef FALSE

#ifndef SCENE_H
#define SCENE_H

#include <QObject>
#include "../SofaGLScene.h"
#include <sofa/simulation/graph/DAGSimulation.h>
typedef sofa::simulation::graph::DAGSimulation SofaSimulation;

class Scene : public QObject, public SofaScene
{
    Q_OBJECT
public:
    explicit Scene(QObject *parent = 0);

signals:
    /// Sent after step() or reset() to notify that redraw is needed
    void stepEnd();
    /// new state: play or pause (for changing the icon)
    void sigPlaying(bool playing);
    /// scene was just opened
    void opened();

public slots:
    /**
     * @brief Clear the current scene and open a new one
     * @param filename new scene to open
     */
    void open(const char* filename);
    /// re-open the current scene
    void reload();
    /// Apply one simulation time step
    void step();
    /// Set the length of the simulation time step
    void setTimeStep( SReal dt );
    /// toggle play/pause
    void playpause();
    /// set play or pause, depending on the parameter
    void play( bool p=true );
    /// pause the animation
    void pause();
    /// restart at the beginning, without reloading the file
    void reset();
public:
    /// Length of the simulation time step
    SReal dt() const;
    /// true if simulation is running, false if it is paused
    bool isPlaying() const;
private:
    SReal _dt;
    QTimer *_timer;


};

#endif // SCENE_H


#endif