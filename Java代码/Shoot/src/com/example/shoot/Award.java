package com.example.shoot;

/**
 * 奖励类型
 */
public interface Award {
    final static int DOUBLE_FIRE=0;
    final static int LIFE=1;
    int getType();
}
