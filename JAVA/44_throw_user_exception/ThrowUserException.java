class PlaneError extends Exception {
  PlaneError(String msg) {
    System.out.println(msg);
  }
}

class ThrowUserException {
  public static void main(String args[]) throws PlaneError {
    // Airplane: private plane
    // Weigth in kg
    final int maxWeigth = 2720;
    int totalWeigth = 2734;
    if (totalWeigth >= maxWeigth) {
      throw new PlaneError(
          "Error takeoff: Airplane is not able to takeoff we need Weigth (in kg) less than " + maxWeigth);
    }
    System.out.println("Plane is able to takeoff");
  }
}

// Error takeoff: Airplane is not able to takeoff we need Weigth (in kg) less
// than 2720
// Exception in thread "main" PlaneError
// . . . . at ThrowUserException.main(ThrowUserException.java:14)