package dk.bobbyz.helloworldvcppandroidapp;

/**
 * Created by Bobby on 15-05-2015.
 */
public class CommonLibrary {
    // declare native method
    public native String hello(String world);
    // load DLL that contains static method
    static {
        System.loadLibrary("CommonLibrary");
    }
}
